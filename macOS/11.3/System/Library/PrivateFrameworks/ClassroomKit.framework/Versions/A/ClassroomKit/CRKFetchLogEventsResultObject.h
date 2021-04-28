/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class CRKEventLog, NSDate, NSString;

@interface CRKFetchLogEventsResultObject : CATTaskResultObject {

	CRKEventLog* _eventLog;
	NSDate* _currentDate;
	NSString* _sessionToken;

}

@property (nonatomic,retain) CRKEventLog * eventLog;              //@synthesize eventLog=_eventLog - In the implementation block
@property (nonatomic,retain) NSDate * currentDate;                //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,copy) NSString * sessionToken;               //@synthesize sessionToken=_sessionToken - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sessionToken;
-(void)setSessionToken:(NSString *)arg1 ;
-(NSDate *)currentDate;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(CRKEventLog *)eventLog;
-(void)setEventLog:(CRKEventLog *)arg1 ;
@end
