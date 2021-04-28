/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEORequestCounterTicket;
#import <GeoServices/GeoServices-Structs.h>
@class NSURL, GEOApplicationAuditToken, NSDictionary, NSData, NSString, GEODataRequestThrottlerToken;

@interface GEODataRequest : NSObject {

	NSURL* _URL;
	GEOApplicationAuditToken* _auditToken;
	NSDictionary* _additionalHTTPHeaders;
	NSData* _bodyData;
	NSData* _cachedData;
	id<GEORequestCounterTicket> _requestCounterTicket;
	NSString* _backgroundSessionIdentifier;
	GEODataRequestThrottlerToken* _throttleToken;
	double _timeoutInterval;
	SCD_Struct_GE87 _kind;
	unsigned long long _multipathServiceType;
	unsigned long long _multipathAlternatePort;
	unsigned long long _options;

}

@property (nonatomic,copy) NSData * cachedData;                                               //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) GEOApplicationAuditToken * auditToken;                    //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy,readonly) NSData * bodyData;                                        //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalHTTPHeaders;                          //@synthesize additionalHTTPHeaders=_additionalHTTPHeaders - In the implementation block
@property (nonatomic,readonly) double timeoutInterval;                                        //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE87 kind;                                          //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) id<GEORequestCounterTicket> requestCounterTicket;              //@synthesize requestCounterTicket=_requestCounterTicket - In the implementation block
@property (nonatomic,readonly) unsigned long long multipathServiceType;                       //@synthesize multipathServiceType=_multipathServiceType - In the implementation block
@property (nonatomic,readonly) unsigned long long multipathAlternatePort;                     //@synthesize multipathAlternatePort=_multipathAlternatePort - In the implementation block
@property (nonatomic,readonly) NSString * backgroundSessionIdentifier;                        //@synthesize backgroundSessionIdentifier=_backgroundSessionIdentifier - In the implementation block
@property (nonatomic,readonly) GEODataRequestThrottlerToken * throttleToken;                  //@synthesize throttleToken=_throttleToken - In the implementation block
@property (nonatomic,readonly) char useHTTPPost; 
@property (nonatomic,readonly) char allowTLSSessionTicketUse; 
@property (nonatomic,readonly) char allowTCPFastOpen; 
@property (nonatomic,readonly) char needsProxy; 
@property (nonatomic,readonly) char requireInexpensiveNetwork; 
@property (nonatomic,readonly) char requirePluggedIn; 
@property (nonatomic,readonly) char requireUnconstrainedNetwork; 
-(id)description;
-(id)init;
-(NSURL *)URL;
-(GEOApplicationAuditToken *)auditToken;
-(SCD_Struct_GE87)kind;
-(NSData *)cachedData;
-(NSString *)backgroundSessionIdentifier;
-(id)initWithKind:(SCD_Struct_GE87)arg1 URL:(id)arg2 auditToken:(id)arg3 timeoutInterval:(double)arg4 additionalHTTPHeaders:(id)arg5 bodyData:(id)arg6 userAgent:(id)arg7 entityTag:(id)arg8 cachedData:(id)arg9 requestCounterTicket:(id)arg10 multipathServiceType:(unsigned long long)arg11 multipathAlternatePort:(unsigned long long)arg12 backgroundSessionIdentifier:(id)arg13 throttleToken:(id)arg14 options:(unsigned long long)arg15 ;
-(NSDictionary *)additionalHTTPHeaders;
-(unsigned long long)multipathServiceType;
-(id<GEORequestCounterTicket>)requestCounterTicket;
-(void)setCachedData:(NSData *)arg1 ;
-(NSData *)bodyData;
-(unsigned long long)multipathAlternatePort;
-(id)publicLogDescription;
-(id)initWithKind:(SCD_Struct_GE87)arg1 URL:(id)arg2 auditToken:(id)arg3 timeoutInterval:(double)arg4 additionalHTTPHeaders:(id)arg5 bodyData:(id)arg6 userAgent:(id)arg7 entityTag:(id)arg8 cachedData:(id)arg9 requestCounterTicket:(id)arg10 multipathServiceType:(unsigned long long)arg11 multipathAlternatePort:(unsigned long long)arg12 throttleToken:(id)arg13 options:(unsigned long long)arg14 ;
-(char)useHTTPPost;
-(char)allowTLSSessionTicketUse;
-(char)allowTCPFastOpen;
-(char)needsProxy;
-(char)requireInexpensiveNetwork;
-(char)requirePluggedIn;
-(char)requireUnconstrainedNetwork;
-(GEODataRequestThrottlerToken *)throttleToken;
-(double)timeoutInterval;
-(id)newURLRequest;
-(id)initWithKind:(SCD_Struct_GE87)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(char)arg5 auditToken:(id)arg6 timeoutInterval:(double)arg7 traits:(id)arg8 requestCounterTicket:(id)arg9 multipathServiceType:(unsigned long long)arg10 multipathAlternatePort:(unsigned long long)arg11 throttleToken:(id)arg12 ;
-(id)updatedRequestWithNewProtobufRequest:(id)arg1 ;
-(id)updatedRequestWithNewBodyData:(id)arg1 ;
-(id)initHttpOnlyRequestWithKind:(SCD_Struct_GE87)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(char)arg5 allowCellularUse:(char)arg6 compressRequest:(char)arg7 requestCounterTicket:(id)arg8 multipathServiceType:(unsigned long long)arg9 multipathAlternatePort:(unsigned long long)arg10 throttleToken:(id)arg11 ;
-(id)initForAnalyticsUploadRequest:(id)arg1 toURL:(id)arg2 requiresProxy:(char)arg3 backgroundIdentifier:(id)arg4 compressRequest:(char)arg5 allowCellular:(char)arg6 allowBattery:(char)arg7 timeToLive:(double)arg8 requestCounterTicket:(id)arg9 throttleToken:(id)arg10 ;
@end

