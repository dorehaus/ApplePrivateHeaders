/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface CFPDDataBuffer : NSObject
+(id)newBufferFromCFData:(CFDataRef)arg1 ;
+(id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(char)arg2 ;
+(id)newBufferFromPropertyList:(void*)arg1 ;
-(unsigned long long)length;
-(void*)bytes;
-(CFDataRef)copyCFData;
-(id)copyXPCData;
-(void*)copyPropertyListWithMutability:(unsigned long long)arg1 error:(_CFError*)arg2 ;
-(char)validatePlist;
-(void)quicklyValidatePlistAndOnFailureInvokeBlock:(/*^block*/id)arg1 ;
-(char)beginAccessing;
-(void)endAccessing;
-(char)purgable;
@end

