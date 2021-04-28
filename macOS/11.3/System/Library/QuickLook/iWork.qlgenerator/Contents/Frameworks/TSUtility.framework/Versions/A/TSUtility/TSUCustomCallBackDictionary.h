/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface TSUCustomCallBackDictionary : NSMutableDictionary {

	CFDictionaryRef mDictionary;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectEnumerator;
-(void)removeAllObjects;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)allValues;
-(void)setObject:(id)arg1 forUncopiedKey:(id)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 keyCallBacks:(const SCD_Struct_TS60*)arg2 valueCallBacks:(const SCD_Struct_TS61*)arg3 ;
-(id)initWithCFDictionary:(CFDictionaryRef)arg1 ;
@end

