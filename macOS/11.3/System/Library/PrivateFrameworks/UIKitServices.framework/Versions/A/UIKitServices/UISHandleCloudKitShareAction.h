/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/Versions/A/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class CKShareMetadata;

@interface UISHandleCloudKitShareAction : BSAction {

	CKShareMetadata* _cachedMetadata;

}

@property (nonatomic,readonly) CKShareMetadata * shareMetadata; 
+(id)cloudKitShareActionWithShareMetadata:(id)arg1 ;
+(void)loadCloudKitFramework;
-(char)isKindOfClass:(Class)arg1 ;
-(id)data;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(CKShareMetadata *)shareMetadata;
-(long long)UIActionType;
-(id)initWithShareMetadata:(id)arg1 ;
@end

