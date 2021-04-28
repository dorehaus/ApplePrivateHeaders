/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriObservation.framework/Versions/A/SiriObservation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriObservation/SiriObservation-Structs.h>
#import <libobjc.A.dylib/SOTimerMutating.h>

@class SOTimer, NSUUID, NSURL, NSString, NSDate;

@interface _SOTimerMutation : NSObject <SOTimerMutating> {

	SOTimer* _baseModel;
	NSUUID* _timerID;
	NSURL* _timerURL;
	char _isFiring;
	NSString* _title;
	long long _state;
	double _duration;
	long long _type;
	double _fireTimeInterval;
	NSDate* _fireDate;
	NSDate* _firedDate;
	NSDate* _dismissedDate;
	NSDate* _lastModifiedDate;
	struct {
		unsigned isDirty : 1;
		unsigned hasTimerID : 1;
		unsigned hasTimerURL : 1;
		unsigned hasIsFiring : 1;
		unsigned hasTitle : 1;
		unsigned hasState : 1;
		unsigned hasDuration : 1;
		unsigned hasType : 1;
		unsigned hasFireTimeInterval : 1;
		unsigned hasFireDate : 1;
		unsigned hasFiredDate : 1;
		unsigned hasDismissedDate : 1;
		unsigned hasLastModifiedDate : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setType:(long long)arg1 ;
-(void)setFireDate:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setFireTimeInterval:(double)arg1 ;
-(void)setLastModifiedDate:(id)arg1 ;
-(void)setIsFiring:(char)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setTimerID:(id)arg1 ;
-(void)setTimerURL:(id)arg1 ;
-(void)setFiredDate:(id)arg1 ;
-(void)setDismissedDate:(id)arg1 ;
@end

