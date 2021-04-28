/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TabDialogConfiguration.h>

@class NSString, NSArray, NSNumber;

@interface AlertDialogConfiguration : NSObject <NSCopying, TabDialogConfiguration> {

	char shouldHideTabContent;
	char _hasPromptField;
	char _hasSecurePromptField;
	long long _dialogType;
	/*^block*/id _presentationBlock;
	NSString* _title;
	NSString* _message;
	NSArray* _buttonLabels;
	NSString* _originStringForAccessibility;
	NSString* _promptFieldDefaultResponse;
	NSNumber* _customWidth;
	/*^block*/id _customLeftMostAction;
	NSArray* _tableData;
	/*^block*/id _tableDidSelectRowAction;

}

@property (nonatomic,copy,readonly) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                                   //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSArray * buttonLabels;                                    //@synthesize buttonLabels=_buttonLabels - In the implementation block
@property (nonatomic,copy,readonly) NSString * originStringForAccessibility;              //@synthesize originStringForAccessibility=_originStringForAccessibility - In the implementation block
@property (nonatomic,readonly) char hasPromptField;                                       //@synthesize hasPromptField=_hasPromptField - In the implementation block
@property (nonatomic,copy,readonly) NSString * promptFieldDefaultResponse;                //@synthesize promptFieldDefaultResponse=_promptFieldDefaultResponse - In the implementation block
@property (nonatomic,readonly) char hasSecurePromptField;                                 //@synthesize hasSecurePromptField=_hasSecurePromptField - In the implementation block
@property (nonatomic,readonly) NSNumber * customWidth;                                    //@synthesize customWidth=_customWidth - In the implementation block
@property (nonatomic,readonly) id customLeftMostAction;                                   //@synthesize customLeftMostAction=_customLeftMostAction - In the implementation block
@property (nonatomic,readonly) NSArray * tableData;                                       //@synthesize tableData=_tableData - In the implementation block
@property (nonatomic,readonly) id tableDidSelectRowAction;                                //@synthesize tableDidSelectRowAction=_tableDidSelectRowAction - In the implementation block
@property (nonatomic,readonly) long long dialogType;                                      //@synthesize dialogType=_dialogType - In the implementation block
@property (nonatomic,readonly) char shouldHideTabContent; 
@property (nonatomic,readonly) id presentationBlock;                                      //@synthesize presentationBlock=_presentationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_truncatedMessageForJavaScriptDialogWithMessage:(id)arg1 ;
+(id)javaScriptAlertDialogConfigurationWithMessage:(id)arg1 originStringForAccessibility:(id)arg2 ;
+(id)javaScriptConfirmDialogConfigurationWithMessage:(id)arg1 originStringForAccessibility:(id)arg2 ;
+(id)javaScriptPromptDialogConfigurationWithMessage:(id)arg1 defaultResponse:(id)arg2 originStringForAccessibility:(id)arg3 ;
+(id)telephonyPromptConfigurationWithOriginStringForAccessibility:(id)arg1 ;
+(id)mailPromptConfigurationWithOriginStringForAccessibility:(id)arg1 ;
+(id)printSheetBlockedPromptConfiguration;
+(id)passDownloadBlockedPromptConfiguration;
+(id)openApplicationPromptConfigurationWithApplicationName:(id)arg1 originStringForAccessibility:(id)arg2 ;
+(id)plugInPromptConfigurationWithTitle:(id)arg1 message:(id)arg2 confirmButtonLabel:(id)arg3 ;
+(id)storageQuotaIncreasePromptConfigurationWithURL:(id)arg1 originDisplayName:(id)arg2 newQuota:(unsigned long long)arg3 ;
+(id)authenticatorDialogConfigurationForPanel:(id)arg1 type:(long long)arg2 withPresentationBlock:(/*^block*/id)arg3 customLeftMostAction:(/*^block*/id)arg4 tableData:(id)arg5 tableDidSelectRowAction:(/*^block*/id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)message;
-(NSString *)title;
-(NSArray *)tableData;
-(id)_initWithTitle:(id)arg1 message:(id)arg2 buttonLabels:(id)arg3 originStringForAccessibility:(id)arg4 hasPromptField:(char)arg5 promptFieldDefaultResponse:(id)arg6 customWidth:(id)arg7 dialogType:(long long)arg8 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 buttonLabels:(id)arg3 originStringForAccessibility:(id)arg4 hasPromptField:(char)arg5 promptFieldDefaultResponse:(id)arg6 customWidth:(id)arg7 ;
-(id)_initWithTitle:(id)arg1 message:(id)arg2 buttonLabels:(id)arg3 originStringForAccessibility:(id)arg4 hasPromptField:(char)arg5 promptFieldDefaultResponse:(id)arg6 hasSecurePromptField:(char)arg7 customWidth:(id)arg8 dialogType:(long long)arg9 presentationBlock:(/*^block*/id)arg10 customLeftMostAction:(/*^block*/id)arg11 tableData:(id)arg12 tableDidSelectRowAction:(/*^block*/id)arg13 ;
-(long long)dialogType;
-(char)shouldHideTabContent;
-(id)presentationBlock;
-(NSArray *)buttonLabels;
-(NSString *)originStringForAccessibility;
-(char)hasPromptField;
-(NSString *)promptFieldDefaultResponse;
-(char)hasSecurePromptField;
-(NSNumber *)customWidth;
-(id)customLeftMostAction;
-(id)tableDidSelectRowAction;
@end
