/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTArchiver : NSObject {

	archiveRef _archive;
	int _archive_fd;
	char _valid;

}

@property (assign,nonatomic) char valid;              //@synthesize valid=_valid - In the implementation block
+(char)extractArchiveAtURL:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(char)valid;
-(void)setValid:(char)arg1 ;
-(id)initWithOutputURL:(id)arg1 compress:(char)arg2 ;
-(void)closeArchive;
-(void)addDirectoryToArchive:(id)arg1 ;
-(void)addFileToArchive:(id)arg1 ;
@end

