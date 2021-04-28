/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSBinderPlugin.h>
#import <libobjc.A.dylib/_NSTextColorBinderPlugin.h>

@protocol _NSTextColorBinderPlugin <_NSBinderPlugin>
@required
-(id)textColorInvalidationCapableObjectForObject:(id)arg1;

@end


@class NSString;

@interface _NSTextColorBinderPlugin : _NSBinderPlugin <_NSTextColorBinderPlugin> {

	struct {
		unsigned _isTextColorInvalidationCapable : 1;
		unsigned _reservedTextColorBinderPlugin : 31;
	}  _textColorBinderPluginFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isUsableWithObject:(id)arg1 ;
-(id)initWithBinder:(id)arg1 object:(id)arg2 ;
-(id)textColorInvalidationCapableObjectForObject:(id)arg1 ;
@end

