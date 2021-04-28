/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XCTAutomationSupport/XCTAutomationSupport-Structs.h>
#import <XCTAutomationSupport/XCTAccessibilityFramework.h>

@protocol XCTAccessibilityFramework <NSObject>
@property (readonly) char allowsRemoteAccess; 
@required
-(char)allowsRemoteAccess;
-(id)attributesForElement:(id)arg1 attributes:(id)arg2 error:(id*)arg3;
-(id)attributes:(id)arg1 forElement:(const AXUIElementRef)arg2 error:(id*)arg3;
-(id)parameterizedAttribute:(id)arg1 forElement:(const AXUIElementRef)arg2 parameter:(id)arg3 error:(id*)arg4;
-(id)hierarchyForElement:(const AXUIElementRef)arg1 attributes:(id)arg2 options:(id)arg3 error:(id*)arg4;

@end


@class NSString;

@interface XCTAccessibilityFramework : NSObject <XCTAccessibilityFramework> {

	char _allowsRemoteAccess;
	int _processID;
	AXUIElementRef _systemWideElement;

}

@property (assign) AXUIElementRef systemWideElement;                //@synthesize systemWideElement=_systemWideElement - In the implementation block
@property (readonly) int processID;                                 //@synthesize processID=_processID - In the implementation block
@property (readonly) char allowsRemoteAccess;                       //@synthesize allowsRemoteAccess=_allowsRemoteAccess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)processID;
-(char)allowsRemoteAccess;
-(AXUIElementRef)systemWideElement;
-(void)setSystemWideElement:(AXUIElementRef)arg1 ;
-(id)attributesForElement:(id)arg1 attributes:(id)arg2 error:(id*)arg3 ;
-(id)initAllowingRemoteAccess:(char)arg1 processID:(int)arg2 ;
-(id)_attributesForElement:(id)arg1 iOSAttributes:(id)arg2 error:(id*)arg3 ;
-(id)attributes:(id)arg1 forElement:(AXUIElementRef)arg2 error:(id*)arg3 ;
-(char)_canAccessElement:(AXUIElementRef)arg1 withError:(id*)arg2 ;
-(id)parameterizedAttribute:(id)arg1 forElement:(AXUIElementRef)arg2 parameter:(id)arg3 error:(id*)arg4 ;
-(id)hierarchyForElement:(AXUIElementRef)arg1 attributes:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)initForRemoteAccess;
-(id)initForLocalAccess;
@end
