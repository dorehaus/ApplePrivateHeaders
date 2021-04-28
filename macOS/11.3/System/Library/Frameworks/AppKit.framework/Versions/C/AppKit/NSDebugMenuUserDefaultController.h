/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSUserInterfaceValidations.h>

@class NSString;

@interface NSDebugMenuUserDefaultController : NSObject <NSUserInterfaceValidations> {

	NSString* _defaultName;
	char _defaultValue;
	/*^block*/id _dynamicSetter;
	/*^block*/id _dynamicGetter;

}

@property (copy,readonly) NSString * defaultName;              //@synthesize defaultName=_defaultName - In the implementation block
+(id)controllerForDefaultWithName:(id)arg1 defaultValue:(char)arg2 dynamicGetter:(/*^block*/id)arg3 dynamicSetter:(/*^block*/id)arg4 ;
+(id)controllerForDefaultWithName:(id)arg1 dynamicGetter:(/*^block*/id)arg2 dynamicSetter:(/*^block*/id)arg3 ;
-(void)dealloc;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(id)initWithName:(id)arg1 defaultValue:(char)arg2 dynamicGetter:(/*^block*/id)arg3 dynamicSetter:(/*^block*/id)arg4 ;
-(void)_toggleDefault:(id)arg1 ;
-(char)currentBoolValue;
-(id)createNewMenuItem;
-(NSString *)defaultName;
@end
