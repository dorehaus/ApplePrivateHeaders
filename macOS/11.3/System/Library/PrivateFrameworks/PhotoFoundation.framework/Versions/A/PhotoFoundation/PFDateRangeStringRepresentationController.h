/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PFDateRangeSystemChangeReceiver.h>

@protocol PFDateRangeStringRepresentationControllerDelegate;
@class NSDate, NSTimer, NSString, NSCalendar;

@interface PFDateRangeStringRepresentationController : NSObject <PFDateRangeSystemChangeReceiver> {

	id<PFDateRangeStringRepresentationControllerDelegate> _delegate;
	NSDate* _startDate;
	NSDate* _endDate;
	NSTimer* _expirationTimer;
	NSTimer* _updateTimer;
	NSString* _stringRepresentation;
	long long _autoUpdatingEnabledCount;
	long long _pendingConfigurationChangesRecursiveCount;
	unsigned _listeningToTimeRelatedNotifications : 1;
	unsigned _configurationChangesMade : 1;

}

@property (nonatomic,__weak,readonly) id<PFDateRangeStringRepresentationControllerDelegate> delegate; 
@property (readonly) NSCalendar * calendar; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)performUpdate:(id)arg1 ;
+(void)updateStringRepresentationInController:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(id)init;
-(id<PFDateRangeStringRepresentationControllerDelegate>)delegate;
-(NSCalendar *)calendar;
-(id)endDate;
-(id)startDate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setStartDate:(id)arg1 endDate:(id)arg2 ;
-(char)isAutoUpdating;
-(void)_handleSystemDidChangeNotification:(id)arg1 ;
-(void)_cancelExpirationTimer;
-(char)_prepareForExpirationAfterTimeInterval:(double)arg1 ;
-(void)_prepareForExpirationOnDate:(id)arg1 ;
-(void)_handleFiredTimer:(id)arg1 ;
-(void)_requestStringRepresentationUpdate;
-(void)_notifyDelegateDidUpdateStringRepresentation:(id)arg1 ;
-(void)_updateStringRepresentation:(id)arg1 startOfDisplayDateDay:(id)arg2 ;
-(char)_updateStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)stringRepresentationForDisplayDate:(id)arg1 startOfDisplayDateDay:(id)arg2 expirationTimeInterval:(double*)arg3 ;
-(id)stringRepresentationForRangeFromDate:(id)arg1 toDate:(id)arg2 ;
-(void)_enableAutoUpdating;
-(void)_disableAutoUpdating;
-(void)startAutoUpdating;
-(void)stopAutoUpdating;
-(void)performConfigurationChangeUsingBlock:(/*^block*/id)arg1 ;
@end

