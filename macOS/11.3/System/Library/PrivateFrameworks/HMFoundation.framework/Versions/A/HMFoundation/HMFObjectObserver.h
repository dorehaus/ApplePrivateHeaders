/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/Versions/A/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMFObjectObserver : HMFObject {

	id _observedObject;
	/*^block*/id _deallocationBlock;
	unsigned long long _cachedHash;

}

@property (readonly) unsigned long long cachedHash;              //@synthesize cachedHash=_cachedHash - In the implementation block
@property (__weak,readonly) id observedObject;                   //@synthesize observedObject=_observedObject - In the implementation block
@property (copy) id deallocationBlock;                           //@synthesize deallocationBlock=_deallocationBlock - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)_stopObserving;
-(id)observedObject;
-(unsigned long long)cachedHash;
-(void)_startObserving;
-(id)deallocationBlock;
-(void)setDeallocationBlock:(id)arg1 ;
-(id)initWithObservedObject:(id)arg1 ;
@end

