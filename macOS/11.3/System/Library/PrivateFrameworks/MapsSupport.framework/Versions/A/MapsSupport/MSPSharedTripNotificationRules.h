/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface MSPSharedTripNotificationRules : NSObject <NSSecureCoding> {

	char _hasMadeFinalPush;
	unsigned long long _maxPostedNotifications;
	unsigned long long _postedNotifications;
	double _minimumETADifference;
	double _minimumNotificationInterval;
	NSDate* _lastPostedETADate;
	NSDate* _lastPostedNotificationDate;
	NSDate* _lastUpdatedDate;
	NSDate* _currentETADate;

}

@property (assign,nonatomic) unsigned long long maxPostedNotifications;                            //@synthesize maxPostedNotifications=_maxPostedNotifications - In the implementation block
@property (assign,nonatomic) unsigned long long postedNotifications;                               //@synthesize postedNotifications=_postedNotifications - In the implementation block
@property (assign,nonatomic) double minimumETADifference;                                          //@synthesize minimumETADifference=_minimumETADifference - In the implementation block
@property (assign,nonatomic) double minimumNotificationInterval;                                   //@synthesize minimumNotificationInterval=_minimumNotificationInterval - In the implementation block
@property (nonatomic,retain) NSDate * lastPostedETADate;                                           //@synthesize lastPostedETADate=_lastPostedETADate - In the implementation block
@property (nonatomic,retain) NSDate * lastPostedNotificationDate;                                  //@synthesize lastPostedNotificationDate=_lastPostedNotificationDate - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdatedDate;                                             //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,retain) NSDate * currentETADate;                                              //@synthesize currentETADate=_currentETADate - In the implementation block
@property (assign,nonatomic) char hasMadeFinalPush;                                                //@synthesize hasMadeFinalPush=_hasMadeFinalPush - In the implementation block
@property (nonatomic,readonly) unsigned long long currentlyNecessaryNotificationType; 
+(char)supportsSecureCoding;
+(id)unarchivingObjectsSet;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)lastUpdatedDate;
-(void)setLastUpdatedDate:(NSDate *)arg1 ;
-(unsigned long long)maxPostedNotifications;
-(unsigned long long)postedNotifications;
-(double)minimumETADifference;
-(double)minimumNotificationInterval;
-(NSDate *)lastPostedETADate;
-(NSDate *)lastPostedNotificationDate;
-(char)hasMadeFinalPush;
-(id)initWithMaximumNumberOfNotifications:(unsigned long long)arg1 minimumNotificationInterval:(double)arg2 ;
-(NSDate *)currentETADate;
-(void)setLastPostedETADate:(NSDate *)arg1 ;
-(void)setLastPostedNotificationDate:(NSDate *)arg1 ;
-(void)setPostedNotifications:(unsigned long long)arg1 ;
-(void)incrementMinimumETADifference;
-(void)setHasMadeFinalPush:(char)arg1 ;
-(void)setCurrentETADate:(NSDate *)arg1 ;
-(double)minimumETADifferenceIncrement;
-(void)setMinimumETADifference:(double)arg1 ;
-(id)initWithMaximumNumberOfNotifications:(unsigned long long)arg1 ;
-(void)didPostNotification;
-(unsigned long long)currentlyNecessaryNotificationType;
-(void)didReceiveUpdateWithETA:(double)arg1 lastUpdated:(double)arg2 ;
-(void)setMaxPostedNotifications:(unsigned long long)arg1 ;
-(void)setMinimumNotificationInterval:(double)arg1 ;
@end

