/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/JavaScriptAppleEvents.framework/Versions/A/JavaScriptAppleEvents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JavaScriptAppleEvents/JavaScriptAppleEvents-Structs.h>
#import <JavaScriptAppleEvents/JSOCPointer.h>

@interface JSOCFunctionPointer : JSOCPointer {

	SCD_Struct_JS0* _cif;
	unsigned _numberOfArguments;
	ffi_type* _retType;
	ffi_type* _argTypes;

}
-(void)dealloc;
-(id)initWithPointerValue:(void*)arg1 type:(id)arg2 ;
-(id)initWithPointerValue:(void*)arg1 type:(id)arg2 additionalArguments:(unsigned)arg3 ;
-(void)callWithArguments:(void*)arg1 returnValue:(void*)arg2 ;
@end

