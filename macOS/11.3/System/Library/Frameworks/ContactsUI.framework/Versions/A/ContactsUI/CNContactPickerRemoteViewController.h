/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/NSRemoteViewController.h>
#import <libobjc.A.dylib/CNContactPickerViewController.h>
#import <libobjc.A.dylib/CNContactPickerInternalSetup.h>
#import <libobjc.A.dylib/CNContactPickerInternalResponseDelegate.h>

@protocol CNContactPickerInternalResponseDelegate;
@class NSXPCConnection, NSString;

@interface CNContactPickerRemoteViewController : NSRemoteViewController <CNContactPickerViewController, CNContactPickerInternalSetup, CNContactPickerInternalResponseDelegate> {

	id<CNContactPickerInternalResponseDelegate> _responseDelegate;
	NSXPCConnection* _connection;

}

@property (__weak) id<CNContactPickerInternalResponseDelegate> responseDelegate;              //@synthesize responseDelegate=_responseDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)internalResponseDelegateInterface;
-(id)init;
-(void)establishConnection;
-(void)addSection:(id)arg1 ;
-(void)setResponseDelegate:(id<CNContactPickerInternalResponseDelegate>)arg1 ;
-(void)pickerDidCreate;
-(void)setDisplayedKeys:(id)arg1 ;
-(void)resetUsageStatistics;
-(void)traceUsageStatistics;
-(void)showSectionWithIdentifier:(id)arg1 ;
-(void)registerSectionsForDraggedTypes:(id)arg1 ;
-(void)setSearchFieldVisible:(char)arg1 ;
-(void)didSelectContact:(id)arg1 key:(id)arg2 value:(id)arg3 identifier:(id)arg4 ;
-(void)didSearchForString:(id)arg1 ;
-(void)didShowSectionWithIdentifier:(id)arg1 ;
-(id<CNContactPickerInternalResponseDelegate>)responseDelegate;
-(id)pickerControlProxy;
@end

