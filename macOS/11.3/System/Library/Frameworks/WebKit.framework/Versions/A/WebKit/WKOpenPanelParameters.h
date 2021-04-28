/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSArray, NSString;

@interface WKOpenPanelParameters : NSObject <WKObject> {

	ObjectStorage<API::OpenPanelParameters> _openPanelParameters;

}

@property (nonatomic,copy,readonly) NSArray * _acceptedMIMETypes; 
@property (nonatomic,copy,readonly) NSArray * _acceptedFileExtensions; 
@property (nonatomic,copy,readonly) NSArray * _allowedFileExtensions; 
@property (nonatomic,readonly) char allowsMultipleSelection; 
@property (nonatomic,readonly) char allowsDirectories; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)allowsMultipleSelection;
-(Object*)_apiObject;
-(char)allowsDirectories;
-(NSArray *)_acceptedMIMETypes;
-(NSArray *)_acceptedFileExtensions;
-(NSArray *)_allowedFileExtensions;
@end
