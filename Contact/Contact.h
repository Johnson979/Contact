//
//  Contact.h
//  Contact
//
//  Created by Todd Johnson on 3/5/15.
//  Copyright (c) 2015 Rock Valley College. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Contact : NSManagedObject

@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSString * fullname;
@property (nonatomic, retain) NSString * phone;

@end
