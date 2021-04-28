/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSUReadChannel.h>

@protocol TSUReadChannel;
@class TSUZipEntry, TSUZipArchive, NSString;

@interface TSUZipReadChannel : NSObject <TSUReadChannel> {

	TSUZipEntry* _entry;
	TSUZipArchive* _archive;
	char _validateCRC;
	id<TSUReadChannel> _archiveReadChannel;

}

@property (nonatomic,readonly) char isValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)isValid;
-(void)close;
-(void)handleFailureWithHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)readWithFileHeaderLength:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(char)readFileHeaderFromData:(id)arg1 headerLength:(unsigned long long*)arg2 ;
-(char)processData:(id)arg1 CRC:(unsigned*)arg2 isDone:(char)arg3 handler:(/*^block*/id)arg4 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)setLowWater:(unsigned long long)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(id)initWithEntry:(id)arg1 archive:(id)arg2 validateCRC:(char)arg3 ;
@end

