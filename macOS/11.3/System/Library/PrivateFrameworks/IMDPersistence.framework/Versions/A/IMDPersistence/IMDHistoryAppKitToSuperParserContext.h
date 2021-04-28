/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/Versions/A/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDPersistence/IMDPersistence-Structs.h>
#import <IMSharedUtilities/IMAttributedStringParserContext.h>

@class NSMutableAttributedString, NSColor, NSMutableArray, NSArray;

@interface IMDHistoryAppKitToSuperParserContext : IMAttributedStringParserContext {

	NSMutableAttributedString* _superFormat;
	NSColor* _bodyBackgroundColor;
	NSColor* _bodyForegroundColor;
	long long _baseWritingDirection;
	char _didAddBodyAttributes;
	NSMutableArray* _mutableFileTransferGUIDs;
	NSMutableArray* _attachmentDicts;

}

@property (readonly) NSMutableArray * mutableFileTransferGUIDs;              //@synthesize mutableFileTransferGUIDs=_mutableFileTransferGUIDs - In the implementation block
@property (readonly) NSArray * fileTransferGUIDs; 
@property (retain) NSMutableArray * attachmentDicts;                         //@synthesize attachmentDicts=_attachmentDicts - In the implementation block
-(void)dealloc;
-(id)name;
-(id)resultsForLogging;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 ;
-(NSArray *)fileTransferGUIDs;
-(NSMutableArray *)mutableFileTransferGUIDs;
-(id)_attributesForAttachmentWithAttributes:(id)arg1 ;
-(id)initWithAttributedString:(id)arg1 baseWritingDirection:(long long)arg2 bodyBackgroundColor:(id)arg3 bodyForegroundColor:(id)arg4 ;
-(id)superFormatString;
-(NSMutableArray *)attachmentDicts;
-(void)setAttachmentDicts:(NSMutableArray *)arg1 ;
@end
