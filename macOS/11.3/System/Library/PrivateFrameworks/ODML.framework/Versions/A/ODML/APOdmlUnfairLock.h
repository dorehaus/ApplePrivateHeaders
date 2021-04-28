/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ODML.framework/Versions/A/ODML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ODML/ODML-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface APOdmlUnfairLock : NSObject <NSLocking> {

	os_unfair_lock_s _unfairLock;
	unsigned _unfairLockOptions;

}

@property (assign,nonatomic) os_unfair_lock_s unfairLock;              //@synthesize unfairLock=_unfairLock - In the implementation block
@property (assign,nonatomic) unsigned unfairLockOptions;               //@synthesize unfairLockOptions=_unfairLockOptions - In the implementation block
-(void)lock;
-(void)unlock;
-(id)initWithOptions:(long long)arg1 ;
-(os_unfair_lock_s)unfairLock;
-(void)setUnfairLock:(os_unfair_lock_s)arg1 ;
-(unsigned)unfairLockOptions;
-(void)setUnfairLockOptions:(unsigned)arg1 ;
@end
