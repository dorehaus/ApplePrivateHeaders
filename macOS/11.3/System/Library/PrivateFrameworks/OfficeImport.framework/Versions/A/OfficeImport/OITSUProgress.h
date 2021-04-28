/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSString;

@interface OITSUProgress : NSObject {

	NSMutableSet* mProgressObservers;
	NSObject*<OS_dispatch_queue> mProgressObserversQueue;
	NSString* mMessage;

}

@property (readonly) double value; 
@property (readonly) double maxValue; 
@property (getter=isIndeterminate,readonly) char indeterminate; 
@property (copy) NSString * message; 
-(void)dealloc;
-(id)init;
-(double)value;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(char)isIndeterminate;
-(double)maxValue;
-(void)removeProgressObserver:(id)arg1 ;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)protected_progressDidChange;
-(char)protected_hasProgressObservers;
-(double)protected_minProgressObserverValueInterval;
@end

