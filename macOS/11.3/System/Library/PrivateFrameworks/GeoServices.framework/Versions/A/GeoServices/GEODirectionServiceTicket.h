/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOComposedRoute, NSArray, NSNumber, NSDictionary;


@protocol GEODirectionServiceTicket <NSObject>
@property (nonatomic,copy) id requestCallback; 
@property (nonatomic,readonly) char isReroute; 
@property (nonatomic,readonly) GEOComposedRoute * originalRoute; 
@property (nonatomic,readonly) NSArray * waypoints; 
@property (nonatomic,copy,readonly) NSNumber * requestPriority; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (nonatomic,readonly) char isDoom; 
@required
-(void)cancel;
-(id)requestCallback;
-(void)setRequestCallback:(/*^block*/id)arg1;
-(NSArray *)waypoints;
-(NSDictionary *)responseUserInfo;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3;
-(char)isReroute;
-(GEOComposedRoute *)originalRoute;
-(NSNumber *)requestPriority;
-(char)isDoom;

@end

