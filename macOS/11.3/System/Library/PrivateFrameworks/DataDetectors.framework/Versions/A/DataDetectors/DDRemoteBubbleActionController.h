/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectors/DataDetectors-Structs.h>
#import <DataDetectors/DDGenericBubbleController.h>
#import <libobjc.A.dylib/DDMiscActionProtocol.h>

@class DDPopover, NSView;

@interface DDRemoteBubbleActionController : DDGenericBubbleController <DDMiscActionProtocol> {

	DDPopover* _bubble;
	NSView* _view;

}

@property (retain) NSView * view;              //@synthesize view=_view - In the implementation block
+(unsigned long long)customContentType;
+(CGRect)customRectForContext:(id)arg1 ;
+(unsigned long long)customRawMenuEdgeForContext:(id)arg1 ;
+(CGSize)customRawMenuSizeForContext:(id)arg1 ;
+(id)controllerWithResult:(DDResultRef)arg1 url:(id)arg2 textCheckingResult:(id)arg3 context:(id)arg4 ;
+(id)runActionWithResult:(DDResultRef)arg1 url:(id)arg2 textCheckingResult:(id)arg3 context:(id)arg4 ;
+(char)displaysNonModalUI;
+(char)requiresService;
+(char)requiresViewBridge;
+(id)customRawMenuItemForContext:(id)arg1 ;
-(NSView *)view;
-(void)setView:(NSView *)arg1 ;
-(void)closeAndReleaseBubble;
-(char)userDidModifyContent;
@end

