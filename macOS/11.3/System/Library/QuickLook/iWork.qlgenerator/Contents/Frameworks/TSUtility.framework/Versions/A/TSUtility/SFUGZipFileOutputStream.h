/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/SFUOutputStream.h>

@class NSString;

@interface SFUGZipFileOutputStream : NSObject <SFUOutputStream> {

	gzFile_s* _file;
	long long _offset;
	NSString* _path;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)gzipExtension;
-(void)dealloc;
-(void)close;
-(id)path;
-(long long)offset;
-(id)initWithPath:(id)arg1 ;
-(id)inputStream;
-(char)canSeek;
-(id)closeLocalStream;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(char)canCreateInputStream;
@end

