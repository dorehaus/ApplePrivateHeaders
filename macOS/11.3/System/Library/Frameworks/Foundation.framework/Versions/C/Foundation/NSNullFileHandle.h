/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileHandle.h>

@interface NSNullFileHandle : NSFileHandle
-(void)writeData:(id)arg1 ;
-(int)fileDescriptor;
-(char)writeData:(id)arg1 error:(out id*)arg2 ;
-(id)readDataToEndOfFile;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(unsigned long long)offsetInFile;
-(unsigned long long)seekToEndOfFile;
-(void)seekToFileOffset:(unsigned long long)arg1 ;
-(void)truncateFileAtOffset:(unsigned long long)arg1 ;
-(void)synchronizeFile;
-(void)closeFile;
-(id)availableData;
-(id)readDataToEndOfFileAndReturnError:(out id*)arg1 ;
-(id)readDataUpToLength:(unsigned long long)arg1 error:(out id*)arg2 ;
-(char)getOffset:(out unsigned long long*)arg1 error:(out id*)arg2 ;
-(char)seekToEndReturningOffset:(out unsigned long long*)arg1 error:(out id*)arg2 ;
-(char)seekToOffset:(unsigned long long)arg1 error:(out id*)arg2 ;
-(char)truncateAtOffset:(unsigned long long)arg1 error:(out id*)arg2 ;
-(char)synchronizeAndReturnError:(out id*)arg1 ;
-(char)closeAndReturnError:(out id*)arg1 ;
-(/*^block*/id)writeabilityHandler;
-(void)setWriteabilityHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)readabilityHandler;
-(void)setReadabilityHandler:(/*^block*/id)arg1 ;
@end

