/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
@interface DERDecoder : NSObject
+(id)dataWithSource:(id)arg1 item:(const SCD_Struct_He0*)arg2 ;
+(id)DecodeItem:(id)arg1 outTag:(unsigned long long*)arg2 outError:(id*)arg3 ;
+(id)DecodeSequence:(id)arg1 specification:(id)arg2 unordered:(char)arg3 ignoreUnknownTags:(char)arg4 outError:(id*)arg5 ;
@end

