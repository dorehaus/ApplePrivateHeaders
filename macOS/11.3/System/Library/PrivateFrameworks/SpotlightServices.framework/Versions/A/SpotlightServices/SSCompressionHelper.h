/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/Versions/A/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSCompressionHelper : NSObject
+(id)sharedInstance;
-(int)unTarFileWithFd:(id)arg1 toPath:(id)arg2 ;
-(int)unpackageTarForFd:(int)arg1 size:(unsigned long long)arg2 parentDir:(const char*)arg3 ;
-(char*)getDataOutWithSize:(unsigned long long)arg1 withFlag:(unsigned long long)arg2 fd:(int*)arg3 ;
-(void)uncompressedContentsForCompressedFile:(id)arg1 outPath:(id)arg2 ;
@end

