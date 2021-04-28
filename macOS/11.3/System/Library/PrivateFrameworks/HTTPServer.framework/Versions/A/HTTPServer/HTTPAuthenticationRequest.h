/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HTTPServer.framework/Versions/A/HTTPServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HTTPAuthenticationRequest : NSObject {

	char isBasic;
	char isDigest;
	NSString* base64Credentials;
	NSString* username;
	NSString* realm;
	NSString* nonce;
	NSString* uri;
	NSString* qop;
	NSString* nc;
	NSString* cnonce;
	NSString* response;

}
-(id)nc;
-(id)uri;
-(id)response;
-(id)username;
-(id)nonce;
-(id)realm;
-(id)initWithRequest:(id)arg1 ;
-(id)quotedSubHeaderFieldValue:(id)arg1 fromHeaderFieldValue:(id)arg2 ;
-(id)nonquotedSubHeaderFieldValue:(id)arg1 fromHeaderFieldValue:(id)arg2 ;
-(char)isBasic;
-(char)isDigest;
-(id)base64Credentials;
-(id)qop;
-(id)cnonce;
@end

