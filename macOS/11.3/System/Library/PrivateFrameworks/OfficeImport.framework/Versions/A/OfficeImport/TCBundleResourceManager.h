/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary;

@interface TCBundleResourceManager : NSObject {

	NSMutableDictionary* mPackageMap;

}
+(id)instance;
+(void)disposeInstance;
-(id)init;
-(id)packageWithName:(id)arg1 cacheResult:(char)arg2 ;
-(id)dataForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(char)arg4 ;
-(xmlDoc*)xmlDocumentForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(char)arg4 ;
@end

