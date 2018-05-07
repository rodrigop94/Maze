/*
 * ****************************************************************************
 *
 * PROJECT:     Maze
 *
 * TITLE:       Auxiliary Functions
 *
 * FUNCTIONS:   
 *
 * AUTHOR:      Brian Mayer blmayer@icloud.com
 *
 * NOTES:       This is the function that sends the file requested in a 
 *              response, it takes two arguments: the client's connection and 
 *              the file requested in the GET message.
 *
 * COPYRIGHT:   All rigths reserved. All wrongs deserved. (Peter D. Hipson)
 *
 * ****************************************************************************
 */

#include "get.h"

int send_get(int conn, struct request req){

	/* Verify the connection and request version */
	if(req.conn == NULL && req.vers > 1){
		req.conn = "Keep-Alive";
	}

	/* Client identification */
	req.user = "Maze-" VERSION;
	
	/* Accept encoding */
	req.cenc =  "*/*";

	/* Create the head */
	unsigned char *request = create_req_header(req);

	printf("request:\n%s\n", request);

	/* Send the request */
	write(conn, request, strlen(request));

	puts("\tGET request sent.");
    
	return 0;
}
