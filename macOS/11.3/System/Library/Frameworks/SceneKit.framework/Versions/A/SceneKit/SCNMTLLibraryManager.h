/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, OS_dispatch_queue, OS_dispatch_group, MTLLibrary;
#import <SceneKit/SceneKit-Structs.h>
@class SCNMTLLibrary, NSObject, NSDictionary, NSMapTable;

@interface SCNMTLLibraryManager : NSObject {

	id<MTLDevice> _device;
	SCNMTLLibrary* _frameworkLibrary;
	SCNMTLLibrary* _defaultLibrary;
	_C3DEngineStats* __engineStats;
	NSObject*<OS_dispatch_queue> _deviceQueue;
	NSObject*<OS_dispatch_group> _shaderCompilationGroup;
	id<MTLLibrary> _commonProfileCacheLibrary;
	NSDictionary* _commonProfilePrecompiledFunctions;
	NSMapTable* _availableLibraries;
	CFDictionaryRef _availableCompiledLibraries;
	os_unfair_lock_s _availableCompiledLibrariesLock;

}
+(id)hashCodeForSource:(id)arg1 macros:(id)arg2 ;
-(void)dealloc;
-(id)device;
-(id)initWithDevice:(id)arg1 ;
-(id)defaultLibrary;
-(id)frameworkLibrary;
-(void)waitForShadersCompilation;
-(void)clearCompiledLibraries;
-(id)commonProfileCacheLibrary;
-(id)shaderCompilationGroup;
-(void)_setEngineStats:(_C3DEngineStats*)arg1 ;
-(id)deviceQueue;
-(id)libraryForFile:(id)arg1 ;
-(id)libraryForSourceCode:(id)arg1 options:(id)arg2 ;
-(void)libraryForProgramDesc:(SCD_Struct_SC136*)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
