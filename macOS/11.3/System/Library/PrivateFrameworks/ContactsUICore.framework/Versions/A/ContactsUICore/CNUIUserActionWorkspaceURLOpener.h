/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIUserActionURLOpener.h>

@class NSWorkspace, NSString;

@interface CNUIUserActionWorkspaceURLOpener : NSObject <CNUIUserActionURLOpener> {

	NSWorkspace* _workspace;

}

@property (nonatomic,readonly) NSWorkspace * workspace;              //@synthesize workspace=_workspace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)urlCouldNotBeOpenedErrorWithURL:(id)arg1 ;
+(id)openConfigurationWithEndpoint:(id)arg1 isSensitive:(char)arg2 ;
-(id)init;
-(id)initWithWorkspace:(id)arg1 ;
-(NSWorkspace *)workspace;
-(id)openURL:(id)arg1 isSensitive:(char)arg2 connectionEndpoint:(id)arg3 withScheduler:(id)arg4 ;
-(id)openURL:(id)arg1 isSensitive:(char)arg2 withScheduler:(id)arg3 ;
-(id)openURL:(id)arg1 withScheduler:(id)arg2 ;
@end

