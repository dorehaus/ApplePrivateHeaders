/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSObservation.h>

@protocol NSObservable;
@class NSObject;

@interface _NSConcreteBlockSinkObservation : NSObservation {

	NSObject*<NSObservable> _LHSobservable;
	/*^block*/id _block;
	int _tag;

}
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)debugDescription;
-(void)remove;
-(void)finishObserving;
-(void)_receiveBox:(id)arg1 ;
-(id)initWithObservable:(id)arg1 blockSink:(/*^block*/id)arg2 tag:(int)arg3 ;
-(void*)_observerStorageOfSize:(unsigned long long)arg1 ;
-(id*)_observerStorage;
@end

