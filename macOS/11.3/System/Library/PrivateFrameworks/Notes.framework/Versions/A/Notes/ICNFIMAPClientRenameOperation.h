/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/ICNFIMAPClientMailboxOperation.h>

@class NSString;

@interface ICNFIMAPClientRenameOperation : ICNFIMAPClientMailboxOperation {

	NSString* _nameForNewMailbox;
	NSString* _nameForNewMailboxArgument;

}

@property (copy) NSString * nameForNewMailbox;                      //@synthesize nameForNewMailbox=_nameForNewMailbox - In the implementation block
@property (copy) NSString * nameForNewMailboxArgument;              //@synthesize nameForNewMailboxArgument=_nameForNewMailboxArgument - In the implementation block
-(id)initWithMailboxName:(id)arg1 ;
-(id)activityString;
-(id)commandTypeString;
-(id)newCommandDataForLiteralPlus:(char)arg1 ;
-(id)detailsString;
-(NSString *)nameForNewMailbox;
-(NSString *)nameForNewMailboxArgument;
-(id)initWithMailboxName:(id)arg1 newMailboxName:(id)arg2 ;
-(void)setNameForNewMailbox:(NSString *)arg1 ;
-(void)setNameForNewMailboxArgument:(NSString *)arg1 ;
-(id)debugCommandString;
@end

