/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/NFFolder.h>

@class NFAccount;

@interface NFTrashFolder : NFFolder

@property (nonatomic,retain) NFAccount * trashAccount; 
-(void)awakeFromInsert;
-(char)validateParent:(inout id*)arg1 error:(out id*)arg2 ;
-(void)emptyContents;
@end

