/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/Versions/A/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSKeyedUnarchiverDelegate.h>

@class NSMutableDictionary, NSString;

@interface GKCustomClassUnarchiver : NSObject <NSKeyedUnarchiverDelegate> {

	NSMutableDictionary* _cache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
-(id)_currentAppModuleName;
-(id)_mangledSwiftClassName:(id)arg1 moduleName:(id)arg2 ;
-(id)_findValidClassName:(id)arg1 ;
@end
