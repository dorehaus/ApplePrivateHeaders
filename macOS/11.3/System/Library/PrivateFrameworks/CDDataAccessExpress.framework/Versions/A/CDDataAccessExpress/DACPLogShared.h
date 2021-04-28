/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/Versions/A/CDDataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface DACPLogShared : NSObject {

	NSMutableDictionary* _UUIDToFileMap;

}
+(id)shared;
-(id)init;
-(id)_getUUIDForFolder:(id)arg1 baseName:(id)arg2 ;
-(char)_logData:(id)arg1 UUID:(id)arg2 startNewFile:(char)arg3 sizeCheck:(long long)arg4 wantsCompressed:(char)arg5 maxFileCount:(long long)arg6 outDidCreateNewFile:(char*)arg7 outNewFilePath:(id*)arg8 ;
-(char)_slurpToFileUUID:(id)arg1 slurpeeFileDescriptor:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 startNewFile:(char)arg5 sizeCheck:(long long)arg6 wantsCompressed:(char)arg7 maxLogFileCount:(int)arg8 outDidCreateNewFile:(char*)arg9 outNewFilePath:(id*)arg10 ;
-(char)_array:(id)arg1 beginsWithArray:(id)arg2 outRemainingArray:(id*)arg3 ;
@end
