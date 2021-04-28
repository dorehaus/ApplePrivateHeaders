/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOXPCRequest.h>
#import <libobjc.A.dylib/GEOXPCRequest.h>

@class GEOETATrafficUpdateRequest, GEODataConditionalConnectionProperties, NSString;

@interface GEOETARequestUpdateable : GEOXPCRequest <GEOXPCRequest> {

	GEOETATrafficUpdateRequest* _request;
	GEODataConditionalConnectionProperties* _connectionProperties;

}

@property (nonatomic,retain) GEOETATrafficUpdateRequest * request;                                       //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) GEODataConditionalConnectionProperties * connectionProperties;              //@synthesize connectionProperties=_connectionProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)replyClass;
-(char)isValid;
-(GEOETATrafficUpdateRequest *)request;
-(void)setRequest:(GEOETATrafficUpdateRequest *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(char)expectsReply;
-(GEODataConditionalConnectionProperties *)connectionProperties;
-(void)setConnectionProperties:(GEODataConditionalConnectionProperties *)arg1 ;
@end

