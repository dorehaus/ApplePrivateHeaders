/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IFFileReader;

@interface IFArchive : NSObject {

	NSString* _path;
	IFFileReader* _fileReader;

}
+(void)initialize;
+(id)archiveWithPath:(id)arg1 withError:(id*)arg2 ;
-(oneway void)release;
-(void)dealloc;
-(id)path;
-(id)entries;
-(char)verifyPath:(id)arg1 withError:(id*)arg2 ;
-(id)archiveIdentity;
-(id)entryForPath:(id)arg1 ;
-(char)extractEntry:(id)arg1 toBuffer:(id*)arg2 withError:(id*)arg3 ;
-(id)digestOfPath:(id)arg1 withType:(id)arg2 ;
-(char)extractCPIOEntry:(id)arg1 toDestination:(id)arg2 withError:(id*)arg3 ;
-(id)initWithPath:(id)arg1 withError:(id*)arg2 ;
-(id)fileReader;
-(char)verifyEntry:(id)arg1 withError:(id*)arg2 ;
-(char)extractEntry:(id)arg1 toDestination:(id)arg2 withError:(id*)arg3 ;
-(char)extractEntry:(id)arg1 toFileWrapper:(id*)arg2 withError:(id*)arg3 ;
-(id)childEntriesForPath:(id)arg1 ;
-(char)extractRawEntry:(id)arg1 toBuffer:(id*)arg2 withError:(id*)arg3 ;
-(char)extractToDestination:(id)arg1 withError:(id*)arg2 ;
-(char)verifyArchive:(id*)arg1 ;
-(void)closeFileReader;
@end

