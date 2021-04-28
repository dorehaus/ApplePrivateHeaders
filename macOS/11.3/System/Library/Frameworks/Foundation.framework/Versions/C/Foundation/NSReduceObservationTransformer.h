/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSObservationTransformer.h>

@interface NSReduceObservationTransformer : NSObservationTransformer {

	/*^block*/id _reducer;
	id _accumulator;

}
+(id)reduceValue:(id)arg1 withReducer:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)finishObserving;
-(void)_receiveBox:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 initialValue:(id)arg2 ;
@end

