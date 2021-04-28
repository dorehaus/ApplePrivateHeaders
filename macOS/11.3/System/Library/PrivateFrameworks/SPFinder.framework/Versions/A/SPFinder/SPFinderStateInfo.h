/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/Versions/A/SPFinder
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, NSSet;

@interface SPFinderStateInfo : NSObject <NSSecureCoding> {

	char _state;
	char _optInScreenOffScan;
	NSDate* _lastUpdated;
	NSDate* _lastPublishDate;
	NSDate* _lastScheduledPublishActivityDate;
	long long _activeCache;
	NSArray* _disabledReasonsArray;

}

@property (assign,nonatomic) char state;                                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) char optInScreenOffScan;                              //@synthesize optInScreenOffScan=_optInScreenOffScan - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdated;                                   //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,copy) NSDate * lastPublishDate;                               //@synthesize lastPublishDate=_lastPublishDate - In the implementation block
@property (nonatomic,copy) NSDate * lastScheduledPublishActivityDate;              //@synthesize lastScheduledPublishActivityDate=_lastScheduledPublishActivityDate - In the implementation block
@property (assign,nonatomic) long long activeCache;                                //@synthesize activeCache=_activeCache - In the implementation block
@property (nonatomic,retain) NSArray * disabledReasonsArray;                       //@synthesize disabledReasonsArray=_disabledReasonsArray - In the implementation block
@property (nonatomic,copy,readonly) NSSet * disabledReasons; 
+(char)supportsSecureCoding;
+(char)canPublishAnonymously;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)state;
-(void)setState:(char)arg1 ;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSDate *)lastUpdated;
-(void)setOptInScreenOffScan:(char)arg1 ;
-(void)setLastPublishDate:(NSDate *)arg1 ;
-(void)setLastScheduledPublishActivityDate:(NSDate *)arg1 ;
-(void)setActiveCache:(long long)arg1 ;
-(void)setDisabledReasonsArray:(NSArray *)arg1 ;
-(NSDate *)lastPublishDate;
-(NSDate *)lastScheduledPublishActivityDate;
-(long long)activeCache;
-(NSArray *)disabledReasonsArray;
-(char)optInScreenOffScan;
-(id)initWithState:(char)arg1 optInScreenOffScan:(char)arg2 lastUpdated:(id)arg3 lastPublishDate:(id)arg4 lastScheduledPublishActivityDate:(id)arg5 activeCache:(long long)arg6 disabledReasons:(id)arg7 ;
-(NSSet *)disabledReasons;
@end

