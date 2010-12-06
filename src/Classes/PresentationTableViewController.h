//
//  EditSlidesTableViewController.h
//  MobileDesigner
//

#import <Foundation/Foundation.h>
#import "CoreDataTableViewController.h"
#import "Project.h"
#import "ProjectRoutingDelegates.h"
#import "EditSlideViewController.h"


@interface PresentationTableViewController : CoreDataTableViewController {
	
	Project* project;
	NSManagedObjectContext *managedObjectContext;
}

@property (assign) NSManagedObjectContext* managedObjectContext;
@property (assign) Project* project;

- initInManagedObjectContext:(NSManagedObjectContext *)context forProject:(Project*)proj;



@end