/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUtils/CoreUtils-Structs.h>
@interface CUKeychainManager : NSObject
-(id)copyItemMatchingItem:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(id)copyItemsMatchingItem:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(id)_copyItemsMatchingItem:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(id)_copyItemsMatchingItemSeparate:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(char)addItem:(id)arg1 error:(id*)arg2 ;
-(id)addItem:(id)arg1 returnFlags:(unsigned)arg2 error:(id*)arg3 ;
-(char)addOrUpdateOrReAddItem:(id)arg1 logCategory:(LogCategory*)arg2 logLabel:(id)arg3 error:(id*)arg4 ;
-(char)removeItemMatchingItem:(id)arg1 error:(id*)arg2 ;
-(char)updateItem:(id)arg1 matchingItem:(id)arg2 error:(id*)arg3 ;
@end

