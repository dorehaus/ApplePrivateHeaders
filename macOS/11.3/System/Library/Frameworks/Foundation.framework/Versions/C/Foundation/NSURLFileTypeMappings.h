/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLFileTypeMappingsInternal;

@interface NSURLFileTypeMappings : NSObject {

	NSURLFileTypeMappingsInternal* _internal;

}
+(id)sharedMappings;
-(id)_init;
-(id)MIMETypeForExtension:(id)arg1 ;
-(id)_UTIMIMETypeForExtension:(id)arg1 ;
-(id)_UTIextensionForMIMEType:(id)arg1 ;
-(id)preferredExtensionForMIMEType:(id)arg1 ;
-(id)extensionsForMIMEType:(id)arg1 ;
@end

