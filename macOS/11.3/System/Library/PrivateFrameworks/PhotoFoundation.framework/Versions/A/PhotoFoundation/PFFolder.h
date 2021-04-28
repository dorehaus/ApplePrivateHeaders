/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFFile.h>

@class NSMutableArray;

@interface PFFolder : PFFile {

	char _isLeaf;
	NSMutableArray* _files;
	NSMutableArray* _folders;

}

@property (nonatomic,retain) NSMutableArray * files;                //@synthesize files=_files - In the implementation block
@property (nonatomic,retain) NSMutableArray * folders;              //@synthesize folders=_folders - In the implementation block
@property (assign,nonatomic) char isLeaf;                           //@synthesize isLeaf=_isLeaf - In the implementation block
-(id)init;
-(void)addFile:(id)arg1 ;
-(char)isLeaf;
-(void)setIsLeaf:(char)arg1 ;
-(NSMutableArray *)files;
-(void)setFolders:(NSMutableArray *)arg1 ;
-(void)setFiles:(NSMutableArray *)arg1 ;
-(void)addFiles:(id)arg1 ;
-(void)addFolders:(id)arg1 ;
-(void)addFolder:(id)arg1 ;
-(NSMutableArray *)folders;
@end
