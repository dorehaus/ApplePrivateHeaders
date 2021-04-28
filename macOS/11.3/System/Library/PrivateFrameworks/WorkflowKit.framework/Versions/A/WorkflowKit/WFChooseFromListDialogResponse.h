/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDialogResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface WFChooseFromListDialogResponse : WFDialogResponse <NSSecureCoding> {

	NSArray* _selectedItems;

}

@property (nonatomic,readonly) NSArray * selectedItems;              //@synthesize selectedItems=_selectedItems - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)selectedItems;
-(id)initWithItems:(id)arg1 cancelled:(char)arg2 ;
@end

