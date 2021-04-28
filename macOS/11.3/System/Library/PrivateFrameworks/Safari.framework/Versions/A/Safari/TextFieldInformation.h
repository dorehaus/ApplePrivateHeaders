/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@class NSString, WBSFormControlMetadata;

@interface TextFieldInformation : NSObject {

	char _hasNotedTextDidChange;
	NSString* _controlUniqueID;
	Frame* _frame;
	WBSFormControlMetadata* _metadata;

}

@property (nonatomic,readonly) Frame* frame;                                        //@synthesize frame=_frame - In the implementation block
@property (nonatomic,copy,readonly) WBSFormControlMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(Frame*)frame;
-(WBSFormControlMetadata *)metadata;
-(id)initWithFrame:(const Frame*)arg1 textFieldMetadata:(id)arg2 ;
-(char)isTextFieldInformationForFieldWithMetadata:(id)arg1 inFrame:(const Frame*)arg2 ;
-(void)noteThatTextDidChangeIfNecessary;
@end

