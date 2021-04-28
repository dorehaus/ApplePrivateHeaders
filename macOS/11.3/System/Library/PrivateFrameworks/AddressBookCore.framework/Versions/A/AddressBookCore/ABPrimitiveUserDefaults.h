/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABPrimitiveUserDefaults <NSObject>
@required
-(char)synchronize;
-(id)primitiveObjectForKey:(id)arg1;
-(void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
-(long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(char*)arg2;
-(char)primitiveBoolValueForKey:(id)arg1 keyExists:(char*)arg2;
-(void)primitiveRemoveObjectForKey:(id)arg1;
-(void)setupAutosync;

@end

