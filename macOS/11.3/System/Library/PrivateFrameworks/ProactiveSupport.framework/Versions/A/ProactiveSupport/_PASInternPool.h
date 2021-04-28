/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/Versions/A/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/_PASZonedObject.h>

@class _PASLock;

@interface _PASInternPool : _PASZonedObject {

	_PASLock* _lock;
	/*^block*/id _copyWithZone;

}
-(id)init;
-(void)clear;
-(id)initWithBehavior:(unsigned long long)arg1 copyWithZone:(/*^block*/id)arg2 ;
-(id)intern:(id)arg1 ;
-(id)internNoCopy:(id)arg1 ;
-(id)_intern:(id)arg1 copyInput:(char)arg2 ;
-(char)isInterned:(id)arg1 ;
@end
