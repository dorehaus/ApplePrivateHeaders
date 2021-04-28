/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSString, NSURL;

@interface ICArchiveWriter : NSObject {

	archiveRef _archive;
	char _usesCompression;
	char _flatten;
	NSString* _flattenFolderName;
	NSURL* _destinationURL;
	NSString* _basePath;

}

@property (nonatomic,retain) NSURL * destinationURL;                    //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,retain) NSString * basePath;                       //@synthesize basePath=_basePath - In the implementation block
@property (assign,nonatomic) char usesCompression;                      //@synthesize usesCompression=_usesCompression - In the implementation block
@property (assign,nonatomic) char flatten;                              //@synthesize flatten=_flatten - In the implementation block
@property (nonatomic,retain) NSString * flattenFolderName;              //@synthesize flattenFolderName=_flattenFolderName - In the implementation block
-(void)dealloc;
-(char)open:(id*)arg1 ;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(char)flatten;
-(NSString *)basePath;
-(void)setBasePath:(NSString *)arg1 ;
-(char)finish:(id*)arg1 ;
-(id)initWithDestinationURL:(id)arg1 baseURL:(id)arg2 ;
-(void)setUsesCompression:(char)arg1 ;
-(char)writeURLs:(id)arg1 error:(id*)arg2 ;
-(char)writeURL:(id)arg1 isDirectory:(char)arg2 error:(id*)arg3 ;
-(char)usesCompression;
-(NSString *)flattenFolderName;
-(void)setFlatten:(char)arg1 ;
-(void)setFlattenFolderName:(NSString *)arg1 ;
@end
