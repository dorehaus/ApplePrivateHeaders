/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/Versions/A/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSExtensionContext;

@interface CacheDeleteServiceInfo : NSObject {

	char _doNotQuery;
	NSExtensionContext* _extensionContext;

}

@property (nonatomic,readonly) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (assign) char doNotQuery;                                                //@synthesize doNotQuery=_doNotQuery - In the implementation block
+(id)serviceInfoWithExtensionContext:(id)arg1 ;
-(NSExtensionContext *)extensionContext;
-(id)initWithExtensionContext:(id)arg1 ;
-(char)doNotQuery;
-(void)setDoNotQuery:(char)arg1 ;
@end

