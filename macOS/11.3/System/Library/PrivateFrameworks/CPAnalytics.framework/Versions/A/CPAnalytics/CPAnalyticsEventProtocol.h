/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/Versions/A/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol CPAnalyticsEventProtocol <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSDate * timestamp; 
@required
-(NSString *)name;
-(id)propertyForKey:(id)arg1;
-(NSDate *)timestamp;
-(id)copyRawPayload;

@end

